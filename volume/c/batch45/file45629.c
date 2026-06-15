// fichero 45629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45629;

Registro45629 crear_registro45629(int id) {
    Registro45629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
