// fichero 49525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49525;

Registro49525 crear_registro49525(int id) {
    Registro49525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
