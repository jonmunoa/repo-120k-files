// fichero 689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro689;

Registro689 crear_registro689(int id) {
    Registro689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
