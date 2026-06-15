// fichero 29885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29885;

Registro29885 crear_registro29885(int id) {
    Registro29885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
