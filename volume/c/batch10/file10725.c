// fichero 10725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10725;

Registro10725 crear_registro10725(int id) {
    Registro10725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
