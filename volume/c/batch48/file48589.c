// fichero 48589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48589;

Registro48589 crear_registro48589(int id) {
    Registro48589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
