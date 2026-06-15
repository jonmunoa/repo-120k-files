// fichero 7957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7957;

Registro7957 crear_registro7957(int id) {
    Registro7957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
