// fichero 3321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3321;

Registro3321 crear_registro3321(int id) {
    Registro3321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
