// fichero 45881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45881;

Registro45881 crear_registro45881(int id) {
    Registro45881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
