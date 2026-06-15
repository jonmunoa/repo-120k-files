// fichero 27469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27469;

Registro27469 crear_registro27469(int id) {
    Registro27469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
