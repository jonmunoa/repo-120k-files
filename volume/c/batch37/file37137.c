// fichero 37137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37137;

Registro37137 crear_registro37137(int id) {
    Registro37137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
