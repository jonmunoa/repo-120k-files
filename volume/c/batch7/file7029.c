// fichero 7029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7029;

Registro7029 crear_registro7029(int id) {
    Registro7029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
