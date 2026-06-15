// fichero 45541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45541;

Registro45541 crear_registro45541(int id) {
    Registro45541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
