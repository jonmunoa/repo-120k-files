// fichero 26213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26213;

Registro26213 crear_registro26213(int id) {
    Registro26213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
