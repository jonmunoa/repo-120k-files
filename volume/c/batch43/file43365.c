// fichero 43365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43365;

Registro43365 crear_registro43365(int id) {
    Registro43365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
