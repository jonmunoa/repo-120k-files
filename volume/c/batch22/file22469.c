// fichero 22469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22469;

Registro22469 crear_registro22469(int id) {
    Registro22469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
