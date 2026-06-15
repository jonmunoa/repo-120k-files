// fichero 46769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46769;

Registro46769 crear_registro46769(int id) {
    Registro46769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
