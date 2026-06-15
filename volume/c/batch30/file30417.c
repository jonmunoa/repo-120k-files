// fichero 30417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30417;

Registro30417 crear_registro30417(int id) {
    Registro30417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
