// fichero 22433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22433;

Registro22433 crear_registro22433(int id) {
    Registro22433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
