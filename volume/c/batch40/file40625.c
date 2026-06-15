// fichero 40625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40625;

Registro40625 crear_registro40625(int id) {
    Registro40625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
