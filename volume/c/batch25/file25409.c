// fichero 25409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25409;

Registro25409 crear_registro25409(int id) {
    Registro25409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
