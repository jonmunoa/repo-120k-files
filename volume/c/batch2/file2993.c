// fichero 2993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2993;

Registro2993 crear_registro2993(int id) {
    Registro2993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
