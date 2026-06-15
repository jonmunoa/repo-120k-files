// fichero 2961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2961;

Registro2961 crear_registro2961(int id) {
    Registro2961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
