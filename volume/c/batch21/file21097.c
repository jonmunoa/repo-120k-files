// fichero 21097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21097;

Registro21097 crear_registro21097(int id) {
    Registro21097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
