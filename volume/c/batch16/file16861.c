// fichero 16861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16861;

Registro16861 crear_registro16861(int id) {
    Registro16861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
