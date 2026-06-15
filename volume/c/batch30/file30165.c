// fichero 30165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30165;

Registro30165 crear_registro30165(int id) {
    Registro30165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
