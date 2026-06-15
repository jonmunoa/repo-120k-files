// fichero 18377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18377;

Registro18377 crear_registro18377(int id) {
    Registro18377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
