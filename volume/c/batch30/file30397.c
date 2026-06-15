// fichero 30397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30397;

Registro30397 crear_registro30397(int id) {
    Registro30397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
