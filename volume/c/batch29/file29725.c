// fichero 29725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29725;

Registro29725 crear_registro29725(int id) {
    Registro29725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
