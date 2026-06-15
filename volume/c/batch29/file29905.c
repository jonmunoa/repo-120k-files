// fichero 29905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29905;

Registro29905 crear_registro29905(int id) {
    Registro29905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
