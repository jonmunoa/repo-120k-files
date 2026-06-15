// fichero 25621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25621;

Registro25621 crear_registro25621(int id) {
    Registro25621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
