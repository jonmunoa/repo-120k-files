// fichero 22965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22965;

Registro22965 crear_registro22965(int id) {
    Registro22965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
