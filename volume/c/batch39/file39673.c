// fichero 39673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39673;

Registro39673 crear_registro39673(int id) {
    Registro39673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
