// fichero 26013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26013;

Registro26013 crear_registro26013(int id) {
    Registro26013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
