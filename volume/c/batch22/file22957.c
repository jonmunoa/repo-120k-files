// fichero 22957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22957;

Registro22957 crear_registro22957(int id) {
    Registro22957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
