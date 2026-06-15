// fichero 30325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30325;

Registro30325 crear_registro30325(int id) {
    Registro30325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
