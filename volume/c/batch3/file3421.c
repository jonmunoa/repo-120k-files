// fichero 3421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3421;

Registro3421 crear_registro3421(int id) {
    Registro3421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
