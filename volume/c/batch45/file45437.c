// fichero 45437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45437;

Registro45437 crear_registro45437(int id) {
    Registro45437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
