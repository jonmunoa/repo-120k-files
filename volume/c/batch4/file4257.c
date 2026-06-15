// fichero 4257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4257;

Registro4257 crear_registro4257(int id) {
    Registro4257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
