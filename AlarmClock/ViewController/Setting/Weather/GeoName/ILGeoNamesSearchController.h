//
//  ILGeoNamesSearchController.h
//
//  Created by Claus Broch on 15/07/10.
//  Copyright 2010-2011 Infinite Loop. All rights reserved.

#import <UIKit/UIKit.h>
#import "ILGeoNamesLookup.h"

@protocol ILGeoNamesSearchControllerDelegate;

@interface ILGeoNamesSearchController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate, ILGeoNamesLookupDelegate> {
@private
	id <ILGeoNamesSearchControllerDelegate> delegate;
	ILGeoNamesLookup *geoNamesSearch;
	NSMutableArray *searchResults;
}
@property(nonatomic, assign) id <ILGeoNamesSearchControllerDelegate> delegate;
@end


@protocol ILGeoNamesSearchControllerDelegate
@required
- (NSString*)geoNamesUserIDForSearchController:(ILGeoNamesSearchController*)controller;
- (void)geoNamesSearchController:(ILGeoNamesSearchController*)controller didFinishWithResult:(NSDictionary*)result fromCurrentLocation:(BOOL)fromCurrenLocation;
@end