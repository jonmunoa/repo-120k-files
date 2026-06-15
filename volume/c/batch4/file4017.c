// fichero 4017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4017;

Registro4017 crear_registro4017(int id) {
    Registro4017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
