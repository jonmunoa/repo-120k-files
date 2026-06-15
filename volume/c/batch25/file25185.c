// fichero 25185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25185;

Registro25185 crear_registro25185(int id) {
    Registro25185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
