// fichero 49353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49353;

Registro49353 crear_registro49353(int id) {
    Registro49353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
