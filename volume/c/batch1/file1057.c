// fichero 1057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1057;

Registro1057 crear_registro1057(int id) {
    Registro1057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
