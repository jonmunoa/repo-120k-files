// fichero 17541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17541;

Registro17541 crear_registro17541(int id) {
    Registro17541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
