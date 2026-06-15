// fichero 37385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37385;

Registro37385 crear_registro37385(int id) {
    Registro37385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
