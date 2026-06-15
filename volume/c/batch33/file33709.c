// fichero 33709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33709;

Registro33709 crear_registro33709(int id) {
    Registro33709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
