// fichero 30385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30385;

Registro30385 crear_registro30385(int id) {
    Registro30385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
