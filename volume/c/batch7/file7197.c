// fichero 7197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7197;

Registro7197 crear_registro7197(int id) {
    Registro7197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
