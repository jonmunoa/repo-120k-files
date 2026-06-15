// fichero 37305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37305;

Registro37305 crear_registro37305(int id) {
    Registro37305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
