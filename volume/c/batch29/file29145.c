// fichero 29145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29145;

Registro29145 crear_registro29145(int id) {
    Registro29145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
