// fichero 19133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19133;

Registro19133 crear_registro19133(int id) {
    Registro19133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
