// fichero 45145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45145;

Registro45145 crear_registro45145(int id) {
    Registro45145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
