// fichero 2805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2805;

Registro2805 crear_registro2805(int id) {
    Registro2805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
