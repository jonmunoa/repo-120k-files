// fichero 2833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2833;

Registro2833 crear_registro2833(int id) {
    Registro2833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
