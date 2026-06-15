// fichero 38245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38245;

Registro38245 crear_registro38245(int id) {
    Registro38245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
