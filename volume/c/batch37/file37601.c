// fichero 37601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37601;

Registro37601 crear_registro37601(int id) {
    Registro37601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
