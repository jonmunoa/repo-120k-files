// fichero 22017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22017;

Registro22017 crear_registro22017(int id) {
    Registro22017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
