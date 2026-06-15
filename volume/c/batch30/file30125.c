// fichero 30125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30125;

Registro30125 crear_registro30125(int id) {
    Registro30125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
