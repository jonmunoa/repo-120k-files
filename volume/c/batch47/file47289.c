// fichero 47289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47289;

Registro47289 crear_registro47289(int id) {
    Registro47289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
