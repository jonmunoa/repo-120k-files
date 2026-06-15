// fichero 30733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30733;

Registro30733 crear_registro30733(int id) {
    Registro30733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
