// fichero 23057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23057;

Registro23057 crear_registro23057(int id) {
    Registro23057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
