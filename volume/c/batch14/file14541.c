// fichero 14541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14541;

Registro14541 crear_registro14541(int id) {
    Registro14541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
