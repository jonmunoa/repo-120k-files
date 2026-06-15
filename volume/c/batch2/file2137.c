// fichero 2137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2137;

Registro2137 crear_registro2137(int id) {
    Registro2137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
