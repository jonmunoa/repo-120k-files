// fichero 45529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45529;

Registro45529 crear_registro45529(int id) {
    Registro45529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
