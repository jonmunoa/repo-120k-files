// fichero 14645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14645;

Registro14645 crear_registro14645(int id) {
    Registro14645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
