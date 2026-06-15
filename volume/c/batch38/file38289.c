// fichero 38289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38289;

Registro38289 crear_registro38289(int id) {
    Registro38289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
