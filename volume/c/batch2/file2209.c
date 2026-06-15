// fichero 2209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2209;

Registro2209 crear_registro2209(int id) {
    Registro2209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
