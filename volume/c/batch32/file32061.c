// fichero 32061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32061;

Registro32061 crear_registro32061(int id) {
    Registro32061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
