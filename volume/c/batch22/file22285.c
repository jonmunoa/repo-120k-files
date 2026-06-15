// fichero 22285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22285;

Registro22285 crear_registro22285(int id) {
    Registro22285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
