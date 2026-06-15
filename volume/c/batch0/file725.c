// fichero 725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro725;

Registro725 crear_registro725(int id) {
    Registro725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
