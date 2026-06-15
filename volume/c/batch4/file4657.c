// fichero 4657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4657;

Registro4657 crear_registro4657(int id) {
    Registro4657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
