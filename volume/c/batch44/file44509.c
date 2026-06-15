// fichero 44509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44509;

Registro44509 crear_registro44509(int id) {
    Registro44509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
