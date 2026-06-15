// fichero 32793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32793;

Registro32793 crear_registro32793(int id) {
    Registro32793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
