// fichero 15165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15165;

Registro15165 crear_registro15165(int id) {
    Registro15165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
