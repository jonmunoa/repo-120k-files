// fichero 2465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2465;

Registro2465 crear_registro2465(int id) {
    Registro2465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
