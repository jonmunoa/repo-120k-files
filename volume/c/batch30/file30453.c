// fichero 30453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30453;

Registro30453 crear_registro30453(int id) {
    Registro30453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
