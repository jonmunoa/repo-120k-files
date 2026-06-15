// fichero 45757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45757;

Registro45757 crear_registro45757(int id) {
    Registro45757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
