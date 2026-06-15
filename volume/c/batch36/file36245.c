// fichero 36245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36245;

Registro36245 crear_registro36245(int id) {
    Registro36245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
