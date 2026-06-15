// fichero 2021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2021;

Registro2021 crear_registro2021(int id) {
    Registro2021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
