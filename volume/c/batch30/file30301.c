// fichero 30301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30301;

Registro30301 crear_registro30301(int id) {
    Registro30301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
