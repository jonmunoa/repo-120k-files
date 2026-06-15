// fichero 39545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39545;

Registro39545 crear_registro39545(int id) {
    Registro39545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
