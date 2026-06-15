// fichero 30481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30481;

Registro30481 crear_registro30481(int id) {
    Registro30481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
