// fichero 23721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23721;

Registro23721 crear_registro23721(int id) {
    Registro23721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
