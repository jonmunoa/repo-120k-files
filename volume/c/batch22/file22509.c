// fichero 22509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22509;

Registro22509 crear_registro22509(int id) {
    Registro22509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
