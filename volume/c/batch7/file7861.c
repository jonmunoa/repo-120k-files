// fichero 7861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7861;

Registro7861 crear_registro7861(int id) {
    Registro7861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
