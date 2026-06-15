// fichero 37281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37281;

Registro37281 crear_registro37281(int id) {
    Registro37281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
