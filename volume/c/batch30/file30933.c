// fichero 30933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30933;

Registro30933 crear_registro30933(int id) {
    Registro30933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
