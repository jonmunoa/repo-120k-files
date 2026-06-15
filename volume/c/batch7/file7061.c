// fichero 7061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7061;

Registro7061 crear_registro7061(int id) {
    Registro7061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
