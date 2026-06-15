// fichero 28537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28537;

Registro28537 crear_registro28537(int id) {
    Registro28537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
