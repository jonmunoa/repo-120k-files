// fichero 22021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22021;

Registro22021 crear_registro22021(int id) {
    Registro22021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
