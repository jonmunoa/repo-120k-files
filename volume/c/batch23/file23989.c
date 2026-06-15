// fichero 23989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23989;

Registro23989 crear_registro23989(int id) {
    Registro23989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
