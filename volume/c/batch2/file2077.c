// fichero 2077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2077;

Registro2077 crear_registro2077(int id) {
    Registro2077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
