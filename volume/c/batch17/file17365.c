// fichero 17365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17365;

Registro17365 crear_registro17365(int id) {
    Registro17365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
