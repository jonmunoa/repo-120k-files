// fichero 16477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16477;

Registro16477 crear_registro16477(int id) {
    Registro16477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
