// fichero 4005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4005;

Registro4005 crear_registro4005(int id) {
    Registro4005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
