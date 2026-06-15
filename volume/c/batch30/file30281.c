// fichero 30281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30281;

Registro30281 crear_registro30281(int id) {
    Registro30281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
