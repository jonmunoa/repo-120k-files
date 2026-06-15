// fichero 45225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45225;

Registro45225 crear_registro45225(int id) {
    Registro45225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
