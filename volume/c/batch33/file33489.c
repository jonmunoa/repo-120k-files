// fichero 33489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33489;

Registro33489 crear_registro33489(int id) {
    Registro33489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
