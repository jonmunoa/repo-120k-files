// fichero 22089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22089;

Registro22089 crear_registro22089(int id) {
    Registro22089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
