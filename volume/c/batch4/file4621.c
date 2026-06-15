// fichero 4621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4621;

Registro4621 crear_registro4621(int id) {
    Registro4621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
