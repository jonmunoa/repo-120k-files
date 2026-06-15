// fichero 2697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2697;

Registro2697 crear_registro2697(int id) {
    Registro2697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
