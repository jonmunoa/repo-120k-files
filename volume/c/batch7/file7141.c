// fichero 7141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7141;

Registro7141 crear_registro7141(int id) {
    Registro7141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
