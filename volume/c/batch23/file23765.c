// fichero 23765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23765;

Registro23765 crear_registro23765(int id) {
    Registro23765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
