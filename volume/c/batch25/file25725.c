// fichero 25725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25725;

Registro25725 crear_registro25725(int id) {
    Registro25725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
