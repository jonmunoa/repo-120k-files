// fichero 16669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16669;

Registro16669 crear_registro16669(int id) {
    Registro16669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
