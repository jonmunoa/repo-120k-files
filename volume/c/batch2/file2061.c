// fichero 2061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2061;

Registro2061 crear_registro2061(int id) {
    Registro2061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
