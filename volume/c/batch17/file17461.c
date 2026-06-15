// fichero 17461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17461;

Registro17461 crear_registro17461(int id) {
    Registro17461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
