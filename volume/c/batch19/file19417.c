// fichero 19417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19417;

Registro19417 crear_registro19417(int id) {
    Registro19417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
