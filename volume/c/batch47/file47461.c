// fichero 47461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47461;

Registro47461 crear_registro47461(int id) {
    Registro47461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
