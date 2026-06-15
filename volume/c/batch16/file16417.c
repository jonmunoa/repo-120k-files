// fichero 16417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16417;

Registro16417 crear_registro16417(int id) {
    Registro16417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
