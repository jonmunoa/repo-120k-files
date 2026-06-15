// fichero 4049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4049;

Registro4049 crear_registro4049(int id) {
    Registro4049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
