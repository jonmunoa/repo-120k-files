// fichero 5853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5853;

Registro5853 crear_registro5853(int id) {
    Registro5853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
