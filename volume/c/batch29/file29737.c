// fichero 29737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29737;

Registro29737 crear_registro29737(int id) {
    Registro29737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
