// fichero 4673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4673;

Registro4673 crear_registro4673(int id) {
    Registro4673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
