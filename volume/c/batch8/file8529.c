// fichero 8529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8529;

Registro8529 crear_registro8529(int id) {
    Registro8529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
