// fichero 25597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25597;

Registro25597 crear_registro25597(int id) {
    Registro25597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
