// fichero 23081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23081;

Registro23081 crear_registro23081(int id) {
    Registro23081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
