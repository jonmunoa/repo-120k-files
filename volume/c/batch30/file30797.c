// fichero 30797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30797;

Registro30797 crear_registro30797(int id) {
    Registro30797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
