// fichero 30937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30937;

Registro30937 crear_registro30937(int id) {
    Registro30937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
