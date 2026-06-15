// fichero 657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro657;

Registro657 crear_registro657(int id) {
    Registro657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
