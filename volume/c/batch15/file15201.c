// fichero 15201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15201;

Registro15201 crear_registro15201(int id) {
    Registro15201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
