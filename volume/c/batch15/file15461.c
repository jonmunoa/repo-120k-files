// fichero 15461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15461;

Registro15461 crear_registro15461(int id) {
    Registro15461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
