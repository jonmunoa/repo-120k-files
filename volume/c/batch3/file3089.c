// fichero 3089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3089;

Registro3089 crear_registro3089(int id) {
    Registro3089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
