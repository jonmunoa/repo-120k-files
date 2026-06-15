// fichero 44289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44289;

Registro44289 crear_registro44289(int id) {
    Registro44289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
