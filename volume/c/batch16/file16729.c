// fichero 16729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16729;

Registro16729 crear_registro16729(int id) {
    Registro16729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
