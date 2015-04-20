//
//  FilesTableViewController.h
//
//  Copyright (C) 2014 IRCCloud, Ltd.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>

@protocol FilesTableViewDelegate<NSObject>
-(void)filesTableViewControllerDidSelectFile:(NSDictionary *)file message:(NSString *)message;
@end

@interface FilesTableViewController : UITableViewController {
    int _pages;
    NSArray *_files;
    NSMutableDictionary *_thumbnails;
    NSDateFormatter *_formatter;
    NSOperationQueue *_thumbQueue;
    int _reqid;
    BOOL _canLoadMore;
    id<FilesTableViewDelegate> _delegate;
    UIView *_footerView;
    NSDictionary *_selectedFile;
}
@property id<FilesTableViewDelegate> delegate;
@end