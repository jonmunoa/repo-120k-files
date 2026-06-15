// fichero 15101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15101;

Registro15101 crear_registro15101(int id) {
    Registro15101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
