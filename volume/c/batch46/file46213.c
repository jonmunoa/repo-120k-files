// fichero 46213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46213;

Registro46213 crear_registro46213(int id) {
    Registro46213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
