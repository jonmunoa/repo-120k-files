// fichero 4385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4385;

Registro4385 crear_registro4385(int id) {
    Registro4385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
