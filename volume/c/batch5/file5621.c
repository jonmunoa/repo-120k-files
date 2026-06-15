// fichero 5621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5621;

Registro5621 crear_registro5621(int id) {
    Registro5621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
