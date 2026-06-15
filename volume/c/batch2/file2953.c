// fichero 2953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2953;

Registro2953 crear_registro2953(int id) {
    Registro2953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
