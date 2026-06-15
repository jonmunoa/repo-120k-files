// fichero 20973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20973;

Registro20973 crear_registro20973(int id) {
    Registro20973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
