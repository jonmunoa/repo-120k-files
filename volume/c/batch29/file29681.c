// fichero 29681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29681;

Registro29681 crear_registro29681(int id) {
    Registro29681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
