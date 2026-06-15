// fichero 5509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5509;

Registro5509 crear_registro5509(int id) {
    Registro5509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
