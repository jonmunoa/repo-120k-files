// fichero 27937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27937;

Registro27937 crear_registro27937(int id) {
    Registro27937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
