// fichero 5625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5625;

Registro5625 crear_registro5625(int id) {
    Registro5625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
