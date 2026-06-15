// fichero 25157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25157;

Registro25157 crear_registro25157(int id) {
    Registro25157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
