// fichero 15537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15537;

Registro15537 crear_registro15537(int id) {
    Registro15537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
