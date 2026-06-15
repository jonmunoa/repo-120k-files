// fichero 15053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15053;

Registro15053 crear_registro15053(int id) {
    Registro15053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
