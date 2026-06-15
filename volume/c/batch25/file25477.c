// fichero 25477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25477;

Registro25477 crear_registro25477(int id) {
    Registro25477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
