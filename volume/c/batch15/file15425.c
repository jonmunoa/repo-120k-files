// fichero 15425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15425;

Registro15425 crear_registro15425(int id) {
    Registro15425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
