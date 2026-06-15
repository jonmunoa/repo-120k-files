// fichero 26709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26709;

Registro26709 crear_registro26709(int id) {
    Registro26709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
