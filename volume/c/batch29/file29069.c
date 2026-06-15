// fichero 29069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29069;

Registro29069 crear_registro29069(int id) {
    Registro29069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
