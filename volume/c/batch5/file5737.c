// fichero 5737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5737;

Registro5737 crear_registro5737(int id) {
    Registro5737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
