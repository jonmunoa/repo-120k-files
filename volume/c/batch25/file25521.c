// fichero 25521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25521;

Registro25521 crear_registro25521(int id) {
    Registro25521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
