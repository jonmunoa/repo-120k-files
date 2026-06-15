// fichero 31601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31601;

Registro31601 crear_registro31601(int id) {
    Registro31601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
