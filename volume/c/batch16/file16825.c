// fichero 16825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16825;

Registro16825 crear_registro16825(int id) {
    Registro16825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
