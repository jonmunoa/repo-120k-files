// fichero 16189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16189;

Registro16189 crear_registro16189(int id) {
    Registro16189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
