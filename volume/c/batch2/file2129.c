// fichero 2129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2129;

Registro2129 crear_registro2129(int id) {
    Registro2129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
