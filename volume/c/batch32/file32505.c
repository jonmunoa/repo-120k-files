// fichero 32505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32505;

Registro32505 crear_registro32505(int id) {
    Registro32505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
