// fichero 46117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46117;

Registro46117 crear_registro46117(int id) {
    Registro46117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
