// fichero 39293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39293;

Registro39293 crear_registro39293(int id) {
    Registro39293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
