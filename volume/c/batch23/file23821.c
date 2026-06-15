// fichero 23821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23821;

Registro23821 crear_registro23821(int id) {
    Registro23821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
