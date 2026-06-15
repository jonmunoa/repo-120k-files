// fichero 14937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14937;

Registro14937 crear_registro14937(int id) {
    Registro14937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
