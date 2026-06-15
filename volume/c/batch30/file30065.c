// fichero 30065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30065;

Registro30065 crear_registro30065(int id) {
    Registro30065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
