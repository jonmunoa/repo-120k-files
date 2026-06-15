// fichero 16377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16377;

Registro16377 crear_registro16377(int id) {
    Registro16377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
