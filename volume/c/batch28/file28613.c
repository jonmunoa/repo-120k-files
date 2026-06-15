// fichero 28613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28613;

Registro28613 crear_registro28613(int id) {
    Registro28613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
