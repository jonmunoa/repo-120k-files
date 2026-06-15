// fichero 17629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17629;

Registro17629 crear_registro17629(int id) {
    Registro17629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
