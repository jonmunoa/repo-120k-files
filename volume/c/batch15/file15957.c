// fichero 15957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15957;

Registro15957 crear_registro15957(int id) {
    Registro15957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
