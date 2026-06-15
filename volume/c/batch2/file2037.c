// fichero 2037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2037;

Registro2037 crear_registro2037(int id) {
    Registro2037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
