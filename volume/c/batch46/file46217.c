// fichero 46217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46217;

Registro46217 crear_registro46217(int id) {
    Registro46217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
