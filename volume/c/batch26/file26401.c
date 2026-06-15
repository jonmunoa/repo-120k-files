// fichero 26401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26401;

Registro26401 crear_registro26401(int id) {
    Registro26401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
