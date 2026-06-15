// fichero 48493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48493;

Registro48493 crear_registro48493(int id) {
    Registro48493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
