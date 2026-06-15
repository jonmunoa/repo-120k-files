// fichero 5477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5477;

Registro5477 crear_registro5477(int id) {
    Registro5477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
