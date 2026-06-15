// fichero 30293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30293;

Registro30293 crear_registro30293(int id) {
    Registro30293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
