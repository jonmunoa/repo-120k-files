// fichero 22569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22569;

Registro22569 crear_registro22569(int id) {
    Registro22569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
