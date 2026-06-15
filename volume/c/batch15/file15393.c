// fichero 15393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15393;

Registro15393 crear_registro15393(int id) {
    Registro15393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
