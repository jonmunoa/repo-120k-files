// fichero 48533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48533;

Registro48533 crear_registro48533(int id) {
    Registro48533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
