// fichero 957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro957;

Registro957 crear_registro957(int id) {
    Registro957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
