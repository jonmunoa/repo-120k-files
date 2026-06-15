// fichero 30621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30621;

Registro30621 crear_registro30621(int id) {
    Registro30621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
