// fichero 2509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2509;

Registro2509 crear_registro2509(int id) {
    Registro2509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
