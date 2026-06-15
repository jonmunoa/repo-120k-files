// fichero 33533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33533;

Registro33533 crear_registro33533(int id) {
    Registro33533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
