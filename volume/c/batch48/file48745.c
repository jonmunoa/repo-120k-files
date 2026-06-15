// fichero 48745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48745;

Registro48745 crear_registro48745(int id) {
    Registro48745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
