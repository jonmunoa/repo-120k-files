// fichero 2029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2029;

Registro2029 crear_registro2029(int id) {
    Registro2029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
