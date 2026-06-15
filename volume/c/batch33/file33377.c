// fichero 33377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33377;

Registro33377 crear_registro33377(int id) {
    Registro33377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
