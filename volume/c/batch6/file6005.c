// fichero 6005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6005;

Registro6005 crear_registro6005(int id) {
    Registro6005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
