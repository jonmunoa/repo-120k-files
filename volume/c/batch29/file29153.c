// fichero 29153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29153;

Registro29153 crear_registro29153(int id) {
    Registro29153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
