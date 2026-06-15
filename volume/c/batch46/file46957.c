// fichero 46957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46957;

Registro46957 crear_registro46957(int id) {
    Registro46957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
