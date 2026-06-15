// fichero 24145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24145;

Registro24145 crear_registro24145(int id) {
    Registro24145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
