// fichero 22753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22753;

Registro22753 crear_registro22753(int id) {
    Registro22753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
