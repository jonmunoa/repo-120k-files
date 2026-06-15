// fichero 25989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25989;

Registro25989 crear_registro25989(int id) {
    Registro25989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
