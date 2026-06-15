// fichero 28213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28213;

Registro28213 crear_registro28213(int id) {
    Registro28213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
