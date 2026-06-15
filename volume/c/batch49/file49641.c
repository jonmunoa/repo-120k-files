// fichero 49641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49641;

Registro49641 crear_registro49641(int id) {
    Registro49641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
