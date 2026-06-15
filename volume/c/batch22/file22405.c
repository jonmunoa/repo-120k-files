// fichero 22405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22405;

Registro22405 crear_registro22405(int id) {
    Registro22405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
