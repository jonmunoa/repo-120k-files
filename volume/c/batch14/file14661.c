// fichero 14661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14661;

Registro14661 crear_registro14661(int id) {
    Registro14661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
