// fichero 7157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7157;

Registro7157 crear_registro7157(int id) {
    Registro7157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
