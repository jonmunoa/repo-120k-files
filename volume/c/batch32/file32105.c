// fichero 32105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32105;

Registro32105 crear_registro32105(int id) {
    Registro32105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
