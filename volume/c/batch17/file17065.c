// fichero 17065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17065;

Registro17065 crear_registro17065(int id) {
    Registro17065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
