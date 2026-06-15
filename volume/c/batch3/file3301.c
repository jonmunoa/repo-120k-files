// fichero 3301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3301;

Registro3301 crear_registro3301(int id) {
    Registro3301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
