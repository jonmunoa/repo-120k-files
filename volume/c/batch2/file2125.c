// fichero 2125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2125;

Registro2125 crear_registro2125(int id) {
    Registro2125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
