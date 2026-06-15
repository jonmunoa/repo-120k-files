// fichero 22045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22045;

Registro22045 crear_registro22045(int id) {
    Registro22045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
