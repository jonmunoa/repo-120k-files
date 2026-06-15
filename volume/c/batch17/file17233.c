// fichero 17233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17233;

Registro17233 crear_registro17233(int id) {
    Registro17233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
