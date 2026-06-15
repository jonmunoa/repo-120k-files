// fichero 16025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16025;

Registro16025 crear_registro16025(int id) {
    Registro16025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
