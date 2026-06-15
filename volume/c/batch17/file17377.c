// fichero 17377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17377;

Registro17377 crear_registro17377(int id) {
    Registro17377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
