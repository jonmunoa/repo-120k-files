// fichero 6681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6681;

Registro6681 crear_registro6681(int id) {
    Registro6681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
