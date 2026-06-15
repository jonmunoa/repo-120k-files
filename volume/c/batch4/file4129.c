// fichero 4129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4129;

Registro4129 crear_registro4129(int id) {
    Registro4129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
