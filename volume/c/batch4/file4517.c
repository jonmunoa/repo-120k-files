// fichero 4517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4517;

Registro4517 crear_registro4517(int id) {
    Registro4517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
