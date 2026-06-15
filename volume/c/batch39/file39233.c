// fichero 39233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39233;

Registro39233 crear_registro39233(int id) {
    Registro39233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
