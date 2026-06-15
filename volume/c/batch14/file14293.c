// fichero 14293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14293;

Registro14293 crear_registro14293(int id) {
    Registro14293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
