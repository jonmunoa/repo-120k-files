// fichero 2977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2977;

Registro2977 crear_registro2977(int id) {
    Registro2977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
