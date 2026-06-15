// fichero 46577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46577;

Registro46577 crear_registro46577(int id) {
    Registro46577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
