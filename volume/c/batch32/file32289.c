// fichero 32289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32289;

Registro32289 crear_registro32289(int id) {
    Registro32289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
