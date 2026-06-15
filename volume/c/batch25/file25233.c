// fichero 25233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25233;

Registro25233 crear_registro25233(int id) {
    Registro25233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
