// fichero 25541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25541;

Registro25541 crear_registro25541(int id) {
    Registro25541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
