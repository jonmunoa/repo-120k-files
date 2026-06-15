// fichero 30469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30469;

Registro30469 crear_registro30469(int id) {
    Registro30469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
