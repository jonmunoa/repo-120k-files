// fichero 17133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17133;

Registro17133 crear_registro17133(int id) {
    Registro17133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
