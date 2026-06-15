// fichero 20213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20213;

Registro20213 crear_registro20213(int id) {
    Registro20213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
