// fichero 2289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2289;

Registro2289 crear_registro2289(int id) {
    Registro2289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
