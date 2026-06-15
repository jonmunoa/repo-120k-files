// fichero 4065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4065;

Registro4065 crear_registro4065(int id) {
    Registro4065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
