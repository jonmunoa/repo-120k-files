// fichero 15057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15057;

Registro15057 crear_registro15057(int id) {
    Registro15057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
