// fichero 25257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25257;

Registro25257 crear_registro25257(int id) {
    Registro25257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
