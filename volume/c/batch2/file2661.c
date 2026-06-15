// fichero 2661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2661;

Registro2661 crear_registro2661(int id) {
    Registro2661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
