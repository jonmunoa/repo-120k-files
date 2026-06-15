// fichero 16081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16081;

Registro16081 crear_registro16081(int id) {
    Registro16081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
