// fichero 34937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34937;

Registro34937 crear_registro34937(int id) {
    Registro34937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
