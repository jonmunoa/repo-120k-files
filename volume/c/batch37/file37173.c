// fichero 37173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37173;

Registro37173 crear_registro37173(int id) {
    Registro37173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
