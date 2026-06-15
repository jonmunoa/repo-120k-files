// fichero 22445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22445;

Registro22445 crear_registro22445(int id) {
    Registro22445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
