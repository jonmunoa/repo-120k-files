// fichero 29345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29345;

Registro29345 crear_registro29345(int id) {
    Registro29345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
