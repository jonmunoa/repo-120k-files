// fichero 28721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28721;

Registro28721 crear_registro28721(int id) {
    Registro28721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
