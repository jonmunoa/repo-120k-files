// fichero 4157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4157;

Registro4157 crear_registro4157(int id) {
    Registro4157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
