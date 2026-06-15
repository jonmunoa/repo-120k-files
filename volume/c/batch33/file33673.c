// fichero 33673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33673;

Registro33673 crear_registro33673(int id) {
    Registro33673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
