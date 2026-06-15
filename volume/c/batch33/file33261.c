// fichero 33261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33261;

Registro33261 crear_registro33261(int id) {
    Registro33261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
