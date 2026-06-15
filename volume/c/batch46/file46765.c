// fichero 46765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46765;

Registro46765 crear_registro46765(int id) {
    Registro46765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
