// fichero 39489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39489;

Registro39489 crear_registro39489(int id) {
    Registro39489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
