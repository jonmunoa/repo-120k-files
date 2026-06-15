// fichero 3469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3469;

Registro3469 crear_registro3469(int id) {
    Registro3469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
