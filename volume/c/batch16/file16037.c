// fichero 16037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16037;

Registro16037 crear_registro16037(int id) {
    Registro16037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
