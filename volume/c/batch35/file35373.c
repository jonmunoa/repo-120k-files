// fichero 35373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35373;

Registro35373 crear_registro35373(int id) {
    Registro35373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
