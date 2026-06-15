// fichero 41397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41397;

Registro41397 crear_registro41397(int id) {
    Registro41397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
