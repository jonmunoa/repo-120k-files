// fichero 17145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17145;

Registro17145 crear_registro17145(int id) {
    Registro17145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
