// fichero 19297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19297;

Registro19297 crear_registro19297(int id) {
    Registro19297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
