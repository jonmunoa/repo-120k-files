// fichero 5297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5297;

Registro5297 crear_registro5297(int id) {
    Registro5297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
