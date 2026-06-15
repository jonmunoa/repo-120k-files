// fichero 18805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18805;

Registro18805 crear_registro18805(int id) {
    Registro18805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
