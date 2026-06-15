// fichero 17137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17137;

Registro17137 crear_registro17137(int id) {
    Registro17137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
