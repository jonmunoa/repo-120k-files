// fichero 17481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17481;

Registro17481 crear_registro17481(int id) {
    Registro17481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
