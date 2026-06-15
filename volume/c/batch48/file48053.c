// fichero 48053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48053;

Registro48053 crear_registro48053(int id) {
    Registro48053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
