// fichero 23585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23585;

Registro23585 crear_registro23585(int id) {
    Registro23585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
