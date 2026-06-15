// fichero 2801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2801;

Registro2801 crear_registro2801(int id) {
    Registro2801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
