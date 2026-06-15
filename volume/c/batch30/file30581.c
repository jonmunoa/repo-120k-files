// fichero 30581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30581;

Registro30581 crear_registro30581(int id) {
    Registro30581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
