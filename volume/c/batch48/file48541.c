// fichero 48541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48541;

Registro48541 crear_registro48541(int id) {
    Registro48541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
