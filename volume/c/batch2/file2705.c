// fichero 2705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2705;

Registro2705 crear_registro2705(int id) {
    Registro2705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
