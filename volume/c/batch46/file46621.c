// fichero 46621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46621;

Registro46621 crear_registro46621(int id) {
    Registro46621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
