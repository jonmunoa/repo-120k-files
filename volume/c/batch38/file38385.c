// fichero 38385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38385;

Registro38385 crear_registro38385(int id) {
    Registro38385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
