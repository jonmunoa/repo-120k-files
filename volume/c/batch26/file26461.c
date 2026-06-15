// fichero 26461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26461;

Registro26461 crear_registro26461(int id) {
    Registro26461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
