//
//  TSAssetsPickerController+Subclasses.h
//  TSAssetsPickerController
//
//  Created by Tomasz Szulc on 25.02.2014.
//  Copyright (c) 2014 Tomasz Szulc. All rights reserved.
//

#import "TSAssetsPickerController.h"

@interface TSAssetsPickerController (Internals)

- (BOOL)shouldShowEmptyAlbums;
- (BOOL)shouldDimmEmptyAlbums;

- (Class)subclassForClass:(Class)aClass;

@end