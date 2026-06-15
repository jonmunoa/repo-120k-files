// fichero 22293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22293;

Registro22293 crear_registro22293(int id) {
    Registro22293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
