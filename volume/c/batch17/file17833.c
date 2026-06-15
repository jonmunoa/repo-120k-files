// fichero 17833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17833;

Registro17833 crear_registro17833(int id) {
    Registro17833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
