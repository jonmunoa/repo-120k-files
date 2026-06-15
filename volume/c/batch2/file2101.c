// fichero 2101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2101;

Registro2101 crear_registro2101(int id) {
    Registro2101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
