// fichero 16049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16049;

Registro16049 crear_registro16049(int id) {
    Registro16049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
