// fichero 13085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13085;

Registro13085 crear_registro13085(int id) {
    Registro13085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
