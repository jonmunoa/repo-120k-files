// fichero 16257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16257;

Registro16257 crear_registro16257(int id) {
    Registro16257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
