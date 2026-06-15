// fichero 45513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45513;

Registro45513 crear_registro45513(int id) {
    Registro45513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
