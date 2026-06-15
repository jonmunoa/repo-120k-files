// fichero 25369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25369;

Registro25369 crear_registro25369(int id) {
    Registro25369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
