// fichero 4689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4689;

Registro4689 crear_registro4689(int id) {
    Registro4689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
