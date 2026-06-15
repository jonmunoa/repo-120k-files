// fichero 29001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29001;

Registro29001 crear_registro29001(int id) {
    Registro29001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
