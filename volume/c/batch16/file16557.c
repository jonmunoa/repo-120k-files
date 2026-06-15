// fichero 16557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16557;

Registro16557 crear_registro16557(int id) {
    Registro16557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
