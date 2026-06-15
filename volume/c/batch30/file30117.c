// fichero 30117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30117;

Registro30117 crear_registro30117(int id) {
    Registro30117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
