// fichero 27013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27013;

Registro27013 crear_registro27013(int id) {
    Registro27013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
