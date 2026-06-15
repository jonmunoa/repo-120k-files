// fichero 5765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5765;

Registro5765 crear_registro5765(int id) {
    Registro5765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
