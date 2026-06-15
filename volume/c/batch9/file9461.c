// fichero 9461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9461;

Registro9461 crear_registro9461(int id) {
    Registro9461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
