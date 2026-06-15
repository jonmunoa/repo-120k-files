// fichero 48613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48613;

Registro48613 crear_registro48613(int id) {
    Registro48613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
