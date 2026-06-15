// fichero 2957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2957;

Registro2957 crear_registro2957(int id) {
    Registro2957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
