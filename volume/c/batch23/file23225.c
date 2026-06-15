// fichero 23225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23225;

Registro23225 crear_registro23225(int id) {
    Registro23225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
