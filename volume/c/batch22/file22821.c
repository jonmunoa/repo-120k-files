// fichero 22821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22821;

Registro22821 crear_registro22821(int id) {
    Registro22821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
