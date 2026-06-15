// fichero 3245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3245;

Registro3245 crear_registro3245(int id) {
    Registro3245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
