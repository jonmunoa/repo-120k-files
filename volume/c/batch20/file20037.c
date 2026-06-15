// fichero 20037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20037;

Registro20037 crear_registro20037(int id) {
    Registro20037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
