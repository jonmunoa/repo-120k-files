// fichero 42281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42281;

Registro42281 crear_registro42281(int id) {
    Registro42281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
