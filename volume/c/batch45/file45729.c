// fichero 45729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45729;

Registro45729 crear_registro45729(int id) {
    Registro45729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
