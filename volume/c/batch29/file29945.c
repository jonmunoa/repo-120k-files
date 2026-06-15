// fichero 29945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29945;

Registro29945 crear_registro29945(int id) {
    Registro29945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
