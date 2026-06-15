// fichero 157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro157;

Registro157 crear_registro157(int id) {
    Registro157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
