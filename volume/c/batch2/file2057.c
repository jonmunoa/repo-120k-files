// fichero 2057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2057;

Registro2057 crear_registro2057(int id) {
    Registro2057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
