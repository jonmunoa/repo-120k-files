// fichero 38229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38229;

Registro38229 crear_registro38229(int id) {
    Registro38229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
