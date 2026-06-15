// fichero 20729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20729;

Registro20729 crear_registro20729(int id) {
    Registro20729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
