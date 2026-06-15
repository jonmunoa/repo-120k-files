// fichero 23561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23561;

Registro23561 crear_registro23561(int id) {
    Registro23561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
