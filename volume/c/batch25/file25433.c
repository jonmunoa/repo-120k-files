// fichero 25433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25433;

Registro25433 crear_registro25433(int id) {
    Registro25433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
