import React from 'react';
import { Switch, Route} from 'react-router-dom';

import Login from './login';
import Menu1 from './menu';
import Landing from './landigpage';
import Signup from './signup';

const Main= () => (
    <Switch>
        <Route exact path="/" component={Landing} />
        <Route path ="/login" component={Login} />
        <Route path="/menu" component={Menu1} />
        <Route path="/signup" component={Signup} />
    </Switch>
)

export default Main;