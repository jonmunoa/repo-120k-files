// fichero 28969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28969;

Registro28969 crear_registro28969(int id) {
    Registro28969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
