// fichero 48289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48289;

Registro48289 crear_registro48289(int id) {
    Registro48289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
