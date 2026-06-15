// fichero 22037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22037;

Registro22037 crear_registro22037(int id) {
    Registro22037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
