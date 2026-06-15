// fichero 22113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22113;

Registro22113 crear_registro22113(int id) {
    Registro22113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
