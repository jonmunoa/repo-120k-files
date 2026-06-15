// fichero 29513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29513;

Registro29513 crear_registro29513(int id) {
    Registro29513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
