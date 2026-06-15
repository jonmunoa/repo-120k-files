// fichero 20837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20837;

Registro20837 crear_registro20837(int id) {
    Registro20837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
