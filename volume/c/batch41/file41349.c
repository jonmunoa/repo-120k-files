// fichero 41349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41349;

Registro41349 crear_registro41349(int id) {
    Registro41349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
