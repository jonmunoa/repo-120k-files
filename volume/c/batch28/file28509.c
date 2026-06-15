// fichero 28509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28509;

Registro28509 crear_registro28509(int id) {
    Registro28509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
