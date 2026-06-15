// fichero 23381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23381;

Registro23381 crear_registro23381(int id) {
    Registro23381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
