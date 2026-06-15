// fichero 27417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27417;

Registro27417 crear_registro27417(int id) {
    Registro27417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
