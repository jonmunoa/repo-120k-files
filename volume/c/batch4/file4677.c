// fichero 4677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4677;

Registro4677 crear_registro4677(int id) {
    Registro4677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
