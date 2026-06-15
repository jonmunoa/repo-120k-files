// fichero 385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro385;

Registro385 crear_registro385(int id) {
    Registro385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
