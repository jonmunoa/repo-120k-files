// fichero 23825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23825;

Registro23825 crear_registro23825(int id) {
    Registro23825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
