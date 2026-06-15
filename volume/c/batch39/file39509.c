// fichero 39509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39509;

Registro39509 crear_registro39509(int id) {
    Registro39509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
