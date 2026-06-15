// fichero 17601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17601;

Registro17601 crear_registro17601(int id) {
    Registro17601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
