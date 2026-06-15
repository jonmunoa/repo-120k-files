// fichero 18621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18621;

Registro18621 crear_registro18621(int id) {
    Registro18621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
