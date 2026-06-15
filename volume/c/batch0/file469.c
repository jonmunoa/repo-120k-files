// fichero 469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro469;

Registro469 crear_registro469(int id) {
    Registro469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
