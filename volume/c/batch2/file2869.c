// fichero 2869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2869;

Registro2869 crear_registro2869(int id) {
    Registro2869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
