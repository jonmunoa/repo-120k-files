// fichero 17289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17289;

Registro17289 crear_registro17289(int id) {
    Registro17289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
