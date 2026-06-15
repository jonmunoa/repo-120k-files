// fichero 28825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28825;

Registro28825 crear_registro28825(int id) {
    Registro28825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
