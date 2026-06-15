// fichero 45181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45181;

Registro45181 crear_registro45181(int id) {
    Registro45181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
