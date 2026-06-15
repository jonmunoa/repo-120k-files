// fichero 23237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23237;

Registro23237 crear_registro23237(int id) {
    Registro23237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
