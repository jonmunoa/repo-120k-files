// fichero 14421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14421;

Registro14421 crear_registro14421(int id) {
    Registro14421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
