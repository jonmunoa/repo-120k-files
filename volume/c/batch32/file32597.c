// fichero 32597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32597;

Registro32597 crear_registro32597(int id) {
    Registro32597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
