// fichero 48617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48617;

Registro48617 crear_registro48617(int id) {
    Registro48617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
