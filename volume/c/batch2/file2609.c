// fichero 2609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2609;

Registro2609 crear_registro2609(int id) {
    Registro2609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
