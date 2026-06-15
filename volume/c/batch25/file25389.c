// fichero 25389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25389;

Registro25389 crear_registro25389(int id) {
    Registro25389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
