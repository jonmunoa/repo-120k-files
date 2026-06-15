// fichero 48733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48733;

Registro48733 crear_registro48733(int id) {
    Registro48733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
