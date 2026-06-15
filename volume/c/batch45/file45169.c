// fichero 45169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45169;

Registro45169 crear_registro45169(int id) {
    Registro45169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
