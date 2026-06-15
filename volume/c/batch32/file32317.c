// fichero 32317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32317;

Registro32317 crear_registro32317(int id) {
    Registro32317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
