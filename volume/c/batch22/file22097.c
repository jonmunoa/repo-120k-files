// fichero 22097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22097;

Registro22097 crear_registro22097(int id) {
    Registro22097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
