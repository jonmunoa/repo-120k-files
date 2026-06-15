// fichero 16505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16505;

Registro16505 crear_registro16505(int id) {
    Registro16505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
