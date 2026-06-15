// fichero 15245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15245;

Registro15245 crear_registro15245(int id) {
    Registro15245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
