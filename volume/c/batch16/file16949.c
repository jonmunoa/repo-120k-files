// fichero 16949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16949;

Registro16949 crear_registro16949(int id) {
    Registro16949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
