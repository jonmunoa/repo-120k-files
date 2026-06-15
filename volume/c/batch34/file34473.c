// fichero 34473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34473;

Registro34473 crear_registro34473(int id) {
    Registro34473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
