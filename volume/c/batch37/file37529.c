// fichero 37529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37529;

Registro37529 crear_registro37529(int id) {
    Registro37529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
