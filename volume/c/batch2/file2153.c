// fichero 2153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2153;

Registro2153 crear_registro2153(int id) {
    Registro2153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
