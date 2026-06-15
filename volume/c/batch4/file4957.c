// fichero 4957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4957;

Registro4957 crear_registro4957(int id) {
    Registro4957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
