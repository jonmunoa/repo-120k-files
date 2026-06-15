// fichero 7089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7089;

Registro7089 crear_registro7089(int id) {
    Registro7089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
