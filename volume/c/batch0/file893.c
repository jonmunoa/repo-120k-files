// fichero 893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro893;

Registro893 crear_registro893(int id) {
    Registro893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
