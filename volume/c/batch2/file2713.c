// fichero 2713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2713;

Registro2713 crear_registro2713(int id) {
    Registro2713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
