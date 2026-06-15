// fichero 20821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20821;

Registro20821 crear_registro20821(int id) {
    Registro20821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
