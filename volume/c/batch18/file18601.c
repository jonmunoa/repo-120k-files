// fichero 18601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18601;

Registro18601 crear_registro18601(int id) {
    Registro18601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
