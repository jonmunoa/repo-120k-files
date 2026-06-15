// fichero 22617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22617;

Registro22617 crear_registro22617(int id) {
    Registro22617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
