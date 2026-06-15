// fichero 48937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48937;

Registro48937 crear_registro48937(int id) {
    Registro48937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
