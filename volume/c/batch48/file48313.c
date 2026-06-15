// fichero 48313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48313;

Registro48313 crear_registro48313(int id) {
    Registro48313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
