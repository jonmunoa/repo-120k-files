// fichero 16381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16381;

Registro16381 crear_registro16381(int id) {
    Registro16381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
