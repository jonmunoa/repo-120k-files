// fichero 25005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25005;

Registro25005 crear_registro25005(int id) {
    Registro25005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
