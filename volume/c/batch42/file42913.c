// fichero 42913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42913;

Registro42913 crear_registro42913(int id) {
    Registro42913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
