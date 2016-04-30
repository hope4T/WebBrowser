//
//  ViewController.h
//  WebBrowser
//
//  Created by Nikolay Petrovich on 4/29/16.
//  Copyright © 2016 Sergey B. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UISearchBarDelegate, UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UISearchBar *urlBar;
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIToolbar *toolBar;
@property (weak, nonatomic) IBOutlet UINavigationItem *titleItem;

@property (strong, nonatomic) UIBarButtonItem *stopLoadingButton;
@property (strong, nonatomic) UIBarButtonItem *reloadButton;
@property (strong, nonatomic) UIBarButtonItem *backButton;
@property (strong, nonatomic) UIBarButtonItem *forwardButton;

@property (assign, nonatomic) BOOL toolbarPreviouslyHidden;

@end

