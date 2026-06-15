// fichero 22229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22229;

Registro22229 crear_registro22229(int id) {
    Registro22229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
