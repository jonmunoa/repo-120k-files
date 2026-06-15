// fichero 49709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49709;

Registro49709 crear_registro49709(int id) {
    Registro49709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
