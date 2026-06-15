// fichero 27189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27189;

Registro27189 crear_registro27189(int id) {
    Registro27189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
