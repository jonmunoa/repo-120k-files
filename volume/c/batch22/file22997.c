// fichero 22997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22997;

Registro22997 crear_registro22997(int id) {
    Registro22997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
