// fichero 17141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17141;

Registro17141 crear_registro17141(int id) {
    Registro17141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
