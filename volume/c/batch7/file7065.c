// fichero 7065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7065;

Registro7065 crear_registro7065(int id) {
    Registro7065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
