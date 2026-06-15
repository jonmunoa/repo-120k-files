// fichero 18289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18289;

Registro18289 crear_registro18289(int id) {
    Registro18289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
