// fichero 16957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16957;

Registro16957 crear_registro16957(int id) {
    Registro16957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
