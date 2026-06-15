// fichero 16681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16681;

Registro16681 crear_registro16681(int id) {
    Registro16681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
