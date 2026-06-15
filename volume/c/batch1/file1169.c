// fichero 1169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1169;

Registro1169 crear_registro1169(int id) {
    Registro1169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
