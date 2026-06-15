// fichero 7529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7529;

Registro7529 crear_registro7529(int id) {
    Registro7529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
