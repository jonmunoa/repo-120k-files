// fichero 29521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29521;

Registro29521 crear_registro29521(int id) {
    Registro29521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
