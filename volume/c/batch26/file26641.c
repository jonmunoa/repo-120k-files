// fichero 26641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26641;

Registro26641 crear_registro26641(int id) {
    Registro26641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
