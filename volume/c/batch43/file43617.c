// fichero 43617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43617;

Registro43617 crear_registro43617(int id) {
    Registro43617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
