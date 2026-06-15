// fichero 2845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2845;

Registro2845 crear_registro2845(int id) {
    Registro2845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
