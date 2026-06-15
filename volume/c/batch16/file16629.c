// fichero 16629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16629;

Registro16629 crear_registro16629(int id) {
    Registro16629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
