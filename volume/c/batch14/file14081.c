// fichero 14081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14081;

Registro14081 crear_registro14081(int id) {
    Registro14081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
