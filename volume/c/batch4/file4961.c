// fichero 4961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4961;

Registro4961 crear_registro4961(int id) {
    Registro4961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
