// fichero 48489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48489;

Registro48489 crear_registro48489(int id) {
    Registro48489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
