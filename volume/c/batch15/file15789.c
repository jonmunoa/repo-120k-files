// fichero 15789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15789;

Registro15789 crear_registro15789(int id) {
    Registro15789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
