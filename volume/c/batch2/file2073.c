// fichero 2073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2073;

Registro2073 crear_registro2073(int id) {
    Registro2073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
