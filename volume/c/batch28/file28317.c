// fichero 28317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28317;

Registro28317 crear_registro28317(int id) {
    Registro28317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
