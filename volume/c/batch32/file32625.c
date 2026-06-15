// fichero 32625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32625;

Registro32625 crear_registro32625(int id) {
    Registro32625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
