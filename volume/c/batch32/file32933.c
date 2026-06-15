// fichero 32933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32933;

Registro32933 crear_registro32933(int id) {
    Registro32933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
