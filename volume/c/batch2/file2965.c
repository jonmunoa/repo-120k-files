// fichero 2965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2965;

Registro2965 crear_registro2965(int id) {
    Registro2965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
