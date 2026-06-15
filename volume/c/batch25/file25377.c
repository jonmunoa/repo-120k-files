// fichero 25377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25377;

Registro25377 crear_registro25377(int id) {
    Registro25377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
