// fichero 23553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23553;

Registro23553 crear_registro23553(int id) {
    Registro23553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
