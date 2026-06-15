// fichero 28625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28625;

Registro28625 crear_registro28625(int id) {
    Registro28625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
