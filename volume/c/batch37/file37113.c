// fichero 37113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37113;

Registro37113 crear_registro37113(int id) {
    Registro37113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
