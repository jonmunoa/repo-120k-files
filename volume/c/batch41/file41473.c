// fichero 41473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41473;

Registro41473 crear_registro41473(int id) {
    Registro41473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
