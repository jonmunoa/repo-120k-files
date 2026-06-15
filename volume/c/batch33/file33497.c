// fichero 33497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33497;

Registro33497 crear_registro33497(int id) {
    Registro33497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
