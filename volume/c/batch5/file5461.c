// fichero 5461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5461;

Registro5461 crear_registro5461(int id) {
    Registro5461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
