// fichero 14765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14765;

Registro14765 crear_registro14765(int id) {
    Registro14765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
