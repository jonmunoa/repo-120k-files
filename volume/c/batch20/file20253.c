// fichero 20253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20253;

Registro20253 crear_registro20253(int id) {
    Registro20253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
