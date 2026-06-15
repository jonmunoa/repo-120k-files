// fichero 16853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16853;

Registro16853 crear_registro16853(int id) {
    Registro16853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
