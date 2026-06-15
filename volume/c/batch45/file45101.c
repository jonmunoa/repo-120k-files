// fichero 45101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45101;

Registro45101 crear_registro45101(int id) {
    Registro45101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
