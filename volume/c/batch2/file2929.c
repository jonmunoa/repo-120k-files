// fichero 2929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2929;

Registro2929 crear_registro2929(int id) {
    Registro2929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
