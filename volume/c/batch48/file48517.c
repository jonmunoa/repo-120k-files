// fichero 48517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48517;

Registro48517 crear_registro48517(int id) {
    Registro48517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
