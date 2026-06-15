// fichero 4329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4329;

Registro4329 crear_registro4329(int id) {
    Registro4329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
