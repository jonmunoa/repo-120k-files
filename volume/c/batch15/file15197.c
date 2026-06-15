// fichero 15197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15197;

Registro15197 crear_registro15197(int id) {
    Registro15197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
