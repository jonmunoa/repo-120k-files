// fichero 2741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2741;

Registro2741 crear_registro2741(int id) {
    Registro2741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
