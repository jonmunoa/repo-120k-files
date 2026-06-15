// fichero 27061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27061;

Registro27061 crear_registro27061(int id) {
    Registro27061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
