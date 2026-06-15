// fichero 22281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22281;

Registro22281 crear_registro22281(int id) {
    Registro22281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
