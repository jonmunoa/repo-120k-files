// fichero 48697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48697;

Registro48697 crear_registro48697(int id) {
    Registro48697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
