// fichero 2813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2813;

Registro2813 crear_registro2813(int id) {
    Registro2813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
