// fichero 49421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49421;

Registro49421 crear_registro49421(int id) {
    Registro49421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
