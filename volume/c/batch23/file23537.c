// fichero 23537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23537;

Registro23537 crear_registro23537(int id) {
    Registro23537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
