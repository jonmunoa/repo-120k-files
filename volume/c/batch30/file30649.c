// fichero 30649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30649;

Registro30649 crear_registro30649(int id) {
    Registro30649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
