// fichero 4509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4509;

Registro4509 crear_registro4509(int id) {
    Registro4509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
