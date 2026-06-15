// fichero 39721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39721;

Registro39721 crear_registro39721(int id) {
    Registro39721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
