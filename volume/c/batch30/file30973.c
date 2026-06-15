// fichero 30973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30973;

Registro30973 crear_registro30973(int id) {
    Registro30973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
