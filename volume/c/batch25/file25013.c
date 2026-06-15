// fichero 25013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25013;

Registro25013 crear_registro25013(int id) {
    Registro25013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
