// fichero 15037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15037;

Registro15037 crear_registro15037(int id) {
    Registro15037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
