// fichero 22217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22217;

Registro22217 crear_registro22217(int id) {
    Registro22217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
