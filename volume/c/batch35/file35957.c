// fichero 35957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35957;

Registro35957 crear_registro35957(int id) {
    Registro35957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
