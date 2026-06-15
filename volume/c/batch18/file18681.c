// fichero 18681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18681;

Registro18681 crear_registro18681(int id) {
    Registro18681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
