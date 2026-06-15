// fichero 19137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19137;

Registro19137 crear_registro19137(int id) {
    Registro19137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
