// fichero 17213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17213;

Registro17213 crear_registro17213(int id) {
    Registro17213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
