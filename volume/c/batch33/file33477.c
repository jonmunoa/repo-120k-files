// fichero 33477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33477;

Registro33477 crear_registro33477(int id) {
    Registro33477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
