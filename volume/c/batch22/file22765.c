// fichero 22765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22765;

Registro22765 crear_registro22765(int id) {
    Registro22765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
