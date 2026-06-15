// fichero 23261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23261;

Registro23261 crear_registro23261(int id) {
    Registro23261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
