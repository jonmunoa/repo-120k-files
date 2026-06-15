// fichero 7961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7961;

Registro7961 crear_registro7961(int id) {
    Registro7961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
