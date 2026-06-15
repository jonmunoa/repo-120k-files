// fichero 42069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42069;

Registro42069 crear_registro42069(int id) {
    Registro42069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
