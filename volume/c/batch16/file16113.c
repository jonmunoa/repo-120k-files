// fichero 16113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16113;

Registro16113 crear_registro16113(int id) {
    Registro16113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
