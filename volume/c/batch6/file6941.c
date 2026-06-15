// fichero 6941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6941;

Registro6941 crear_registro6941(int id) {
    Registro6941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
