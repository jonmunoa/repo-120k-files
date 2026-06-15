// fichero 23689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23689;

Registro23689 crear_registro23689(int id) {
    Registro23689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
