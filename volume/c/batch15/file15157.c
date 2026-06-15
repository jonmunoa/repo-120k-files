// fichero 15157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15157;

Registro15157 crear_registro15157(int id) {
    Registro15157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
