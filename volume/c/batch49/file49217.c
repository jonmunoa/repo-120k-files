// fichero 49217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49217;

Registro49217 crear_registro49217(int id) {
    Registro49217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
