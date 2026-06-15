// fichero 4205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4205;

Registro4205 crear_registro4205(int id) {
    Registro4205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
