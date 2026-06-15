// fichero 40621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40621;

Registro40621 crear_registro40621(int id) {
    Registro40621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
