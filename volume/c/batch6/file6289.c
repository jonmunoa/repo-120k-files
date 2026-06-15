// fichero 6289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6289;

Registro6289 crear_registro6289(int id) {
    Registro6289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
