// fichero 16453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16453;

Registro16453 crear_registro16453(int id) {
    Registro16453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
