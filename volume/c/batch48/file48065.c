// fichero 48065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48065;

Registro48065 crear_registro48065(int id) {
    Registro48065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
