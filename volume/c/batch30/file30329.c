// fichero 30329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30329;

Registro30329 crear_registro30329(int id) {
    Registro30329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
