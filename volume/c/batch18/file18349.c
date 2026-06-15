// fichero 18349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18349;

Registro18349 crear_registro18349(int id) {
    Registro18349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
