// fichero 27081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27081;

Registro27081 crear_registro27081(int id) {
    Registro27081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
