// fichero 15029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15029;

Registro15029 crear_registro15029(int id) {
    Registro15029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
