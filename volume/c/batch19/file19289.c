// fichero 19289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19289;

Registro19289 crear_registro19289(int id) {
    Registro19289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
