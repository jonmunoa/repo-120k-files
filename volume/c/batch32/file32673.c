// fichero 32673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32673;

Registro32673 crear_registro32673(int id) {
    Registro32673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
