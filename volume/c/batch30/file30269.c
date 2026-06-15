// fichero 30269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30269;

Registro30269 crear_registro30269(int id) {
    Registro30269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
