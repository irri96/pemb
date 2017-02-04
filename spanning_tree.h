/******************************************************************************
 * spanning_tree.h
 *
 * Parallel construction of succinct plane graphs
 *
 ******************************************************************************
 * Copyright (C) 2016 Leo Ferres, José Fuentes <jfuentess@dcc.uchile.cl>, Travis
 * Gagie, Meng He and Gonzalo Navarro
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/

#include "bit_array.h"
#include "util.h"

Tree *seq_dfs_spanning_tree(Graph *, uint, int *, uint *, uint *);

Tree* seq_bfs_spanning_tree(Graph *, uint);

Tree *par_spanning_tree(Graph *, uint, int *, uint *, uint *);
Tree *par_spanning_tree2(Graph *, uint, int *, uint *, uint *);
