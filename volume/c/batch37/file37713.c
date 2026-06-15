// fichero 37713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37713;

Registro37713 crear_registro37713(int id) {
    Registro37713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
