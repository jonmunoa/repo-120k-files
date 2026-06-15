// fichero 7377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7377;

Registro7377 crear_registro7377(int id) {
    Registro7377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
