// fichero 7613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7613;

Registro7613 crear_registro7613(int id) {
    Registro7613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
