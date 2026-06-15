// fichero 30437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30437;

Registro30437 crear_registro30437(int id) {
    Registro30437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
