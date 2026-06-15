// fichero 48089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48089;

Registro48089 crear_registro48089(int id) {
    Registro48089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
