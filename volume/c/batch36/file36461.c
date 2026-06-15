// fichero 36461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36461;

Registro36461 crear_registro36461(int id) {
    Registro36461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
