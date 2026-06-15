// fichero 2581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2581;

Registro2581 crear_registro2581(int id) {
    Registro2581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
