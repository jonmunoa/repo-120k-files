// fichero 22905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22905;

Registro22905 crear_registro22905(int id) {
    Registro22905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
