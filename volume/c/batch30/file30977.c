// fichero 30977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30977;

Registro30977 crear_registro30977(int id) {
    Registro30977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
