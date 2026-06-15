// fichero 25213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25213;

Registro25213 crear_registro25213(int id) {
    Registro25213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
