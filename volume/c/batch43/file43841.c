// fichero 43841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43841;

Registro43841 crear_registro43841(int id) {
    Registro43841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
