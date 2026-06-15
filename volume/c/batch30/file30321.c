// fichero 30321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30321;

Registro30321 crear_registro30321(int id) {
    Registro30321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
