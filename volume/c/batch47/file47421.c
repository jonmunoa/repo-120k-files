// fichero 47421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47421;

Registro47421 crear_registro47421(int id) {
    Registro47421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
