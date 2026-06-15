// fichero 21937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21937;

Registro21937 crear_registro21937(int id) {
    Registro21937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
