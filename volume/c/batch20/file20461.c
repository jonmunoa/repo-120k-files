// fichero 20461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20461;

Registro20461 crear_registro20461(int id) {
    Registro20461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
