// fichero 30273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30273;

Registro30273 crear_registro30273(int id) {
    Registro30273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
