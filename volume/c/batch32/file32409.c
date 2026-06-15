// fichero 32409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32409;

Registro32409 crear_registro32409(int id) {
    Registro32409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
