// fichero 32629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32629;

Registro32629 crear_registro32629(int id) {
    Registro32629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
