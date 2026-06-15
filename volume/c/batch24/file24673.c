// fichero 24673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24673;

Registro24673 crear_registro24673(int id) {
    Registro24673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
