// fichero 16029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16029;

Registro16029 crear_registro16029(int id) {
    Registro16029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
