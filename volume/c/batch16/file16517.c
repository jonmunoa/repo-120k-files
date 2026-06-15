// fichero 16517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16517;

Registro16517 crear_registro16517(int id) {
    Registro16517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
