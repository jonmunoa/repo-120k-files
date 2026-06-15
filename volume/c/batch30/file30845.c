// fichero 30845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30845;

Registro30845 crear_registro30845(int id) {
    Registro30845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
