// fichero 4093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4093;

Registro4093 crear_registro4093(int id) {
    Registro4093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
