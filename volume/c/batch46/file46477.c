// fichero 46477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46477;

Registro46477 crear_registro46477(int id) {
    Registro46477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
