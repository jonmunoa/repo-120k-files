// fichero 26289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26289;

Registro26289 crear_registro26289(int id) {
    Registro26289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
