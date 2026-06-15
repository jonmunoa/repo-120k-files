// fichero 45217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45217;

Registro45217 crear_registro45217(int id) {
    Registro45217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
