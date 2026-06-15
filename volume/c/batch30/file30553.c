// fichero 30553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30553;

Registro30553 crear_registro30553(int id) {
    Registro30553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
