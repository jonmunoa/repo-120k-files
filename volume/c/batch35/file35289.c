// fichero 35289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35289;

Registro35289 crear_registro35289(int id) {
    Registro35289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
