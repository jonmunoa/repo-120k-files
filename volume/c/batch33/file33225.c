// fichero 33225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33225;

Registro33225 crear_registro33225(int id) {
    Registro33225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
