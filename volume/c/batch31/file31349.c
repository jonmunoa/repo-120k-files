// fichero 31349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31349;

Registro31349 crear_registro31349(int id) {
    Registro31349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
