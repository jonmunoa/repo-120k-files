// fichero 14133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14133;

Registro14133 crear_registro14133(int id) {
    Registro14133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
