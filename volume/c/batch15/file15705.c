// fichero 15705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15705;

Registro15705 crear_registro15705(int id) {
    Registro15705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
