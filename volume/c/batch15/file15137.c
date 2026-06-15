// fichero 15137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15137;

Registro15137 crear_registro15137(int id) {
    Registro15137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
