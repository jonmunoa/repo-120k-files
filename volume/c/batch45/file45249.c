// fichero 45249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45249;

Registro45249 crear_registro45249(int id) {
    Registro45249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
