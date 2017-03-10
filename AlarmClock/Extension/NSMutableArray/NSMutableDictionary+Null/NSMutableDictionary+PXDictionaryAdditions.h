#import <Foundation/Foundation.h>

@interface NSMutableDictionary (PXDictionaryAdditions)
- (BOOL)setObjectOrNull:(id)anObject forKey:(id)aKey;
@end