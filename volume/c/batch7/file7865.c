// fichero 7865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7865;

Registro7865 crear_registro7865(int id) {
    Registro7865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
