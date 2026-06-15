// fichero 18413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18413;

Registro18413 crear_registro18413(int id) {
    Registro18413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
