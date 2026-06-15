// fichero 16617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16617;

Registro16617 crear_registro16617(int id) {
    Registro16617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
