// fichero 46289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46289;

Registro46289 crear_registro46289(int id) {
    Registro46289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
