// fichero 42301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42301;

Registro42301 crear_registro42301(int id) {
    Registro42301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
