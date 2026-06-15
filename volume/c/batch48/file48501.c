// fichero 48501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48501;

Registro48501 crear_registro48501(int id) {
    Registro48501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
