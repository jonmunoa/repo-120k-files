// fichero 34625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34625;

Registro34625 crear_registro34625(int id) {
    Registro34625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
