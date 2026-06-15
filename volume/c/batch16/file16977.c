// fichero 16977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16977;

Registro16977 crear_registro16977(int id) {
    Registro16977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
