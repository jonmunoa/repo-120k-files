// fichero 30037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30037;

Registro30037 crear_registro30037(int id) {
    Registro30037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
