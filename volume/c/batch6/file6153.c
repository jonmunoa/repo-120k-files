// fichero 6153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6153;

Registro6153 crear_registro6153(int id) {
    Registro6153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
