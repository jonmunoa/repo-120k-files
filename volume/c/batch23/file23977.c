// fichero 23977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23977;

Registro23977 crear_registro23977(int id) {
    Registro23977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
