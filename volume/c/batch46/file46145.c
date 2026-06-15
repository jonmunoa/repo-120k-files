// fichero 46145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46145;

Registro46145 crear_registro46145(int id) {
    Registro46145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
