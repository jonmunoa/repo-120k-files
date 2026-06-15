// fichero 4613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4613;

Registro4613 crear_registro4613(int id) {
    Registro4613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
