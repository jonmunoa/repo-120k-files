// fichero 6137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6137;

Registro6137 crear_registro6137(int id) {
    Registro6137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
