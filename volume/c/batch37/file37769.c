// fichero 37769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37769;

Registro37769 crear_registro37769(int id) {
    Registro37769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
