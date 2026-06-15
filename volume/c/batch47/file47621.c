// fichero 47621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47621;

Registro47621 crear_registro47621(int id) {
    Registro47621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
