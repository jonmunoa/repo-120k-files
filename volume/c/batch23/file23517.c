// fichero 23517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23517;

Registro23517 crear_registro23517(int id) {
    Registro23517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
