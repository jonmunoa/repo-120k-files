// fichero 16205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16205;

Registro16205 crear_registro16205(int id) {
    Registro16205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
