// fichero 2645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2645;

Registro2645 crear_registro2645(int id) {
    Registro2645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
