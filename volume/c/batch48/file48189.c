// fichero 48189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48189;

Registro48189 crear_registro48189(int id) {
    Registro48189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
