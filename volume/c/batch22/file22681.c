// fichero 22681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22681;

Registro22681 crear_registro22681(int id) {
    Registro22681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
