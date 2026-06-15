// fichero 15481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15481;

Registro15481 crear_registro15481(int id) {
    Registro15481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
