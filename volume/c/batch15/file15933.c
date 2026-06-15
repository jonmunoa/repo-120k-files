// fichero 15933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15933;

Registro15933 crear_registro15933(int id) {
    Registro15933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
