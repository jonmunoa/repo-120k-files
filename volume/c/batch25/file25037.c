// fichero 25037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25037;

Registro25037 crear_registro25037(int id) {
    Registro25037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
