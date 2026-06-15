// fichero 33617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33617;

Registro33617 crear_registro33617(int id) {
    Registro33617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
