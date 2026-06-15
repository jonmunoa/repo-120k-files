// fichero 11725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11725;

Registro11725 crear_registro11725(int id) {
    Registro11725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
