// fichero 7033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7033;

Registro7033 crear_registro7033(int id) {
    Registro7033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
