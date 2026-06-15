// fichero 46205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46205;

Registro46205 crear_registro46205(int id) {
    Registro46205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
