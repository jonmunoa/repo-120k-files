// fichero 16093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16093;

Registro16093 crear_registro16093(int id) {
    Registro16093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
