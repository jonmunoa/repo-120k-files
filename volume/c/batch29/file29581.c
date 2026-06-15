// fichero 29581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29581;

Registro29581 crear_registro29581(int id) {
    Registro29581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
