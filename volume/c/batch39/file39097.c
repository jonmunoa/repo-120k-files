// fichero 39097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39097;

Registro39097 crear_registro39097(int id) {
    Registro39097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
