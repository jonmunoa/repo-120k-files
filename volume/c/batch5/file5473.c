// fichero 5473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5473;

Registro5473 crear_registro5473(int id) {
    Registro5473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
