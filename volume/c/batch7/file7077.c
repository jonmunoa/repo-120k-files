// fichero 7077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7077;

Registro7077 crear_registro7077(int id) {
    Registro7077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
