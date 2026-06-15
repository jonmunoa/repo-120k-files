// fichero 23649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23649;

Registro23649 crear_registro23649(int id) {
    Registro23649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
