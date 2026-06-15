// fichero 39213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39213;

Registro39213 crear_registro39213(int id) {
    Registro39213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
