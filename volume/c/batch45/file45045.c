// fichero 45045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45045;

Registro45045 crear_registro45045(int id) {
    Registro45045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
