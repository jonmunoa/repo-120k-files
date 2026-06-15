// fichero 28517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28517;

Registro28517 crear_registro28517(int id) {
    Registro28517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
