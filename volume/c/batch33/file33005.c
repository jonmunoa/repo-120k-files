// fichero 33005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33005;

Registro33005 crear_registro33005(int id) {
    Registro33005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
