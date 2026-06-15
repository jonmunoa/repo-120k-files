// fichero 45477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45477;

Registro45477 crear_registro45477(int id) {
    Registro45477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
