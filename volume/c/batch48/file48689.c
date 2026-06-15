// fichero 48689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48689;

Registro48689 crear_registro48689(int id) {
    Registro48689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
