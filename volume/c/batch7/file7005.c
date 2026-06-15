// fichero 7005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7005;

Registro7005 crear_registro7005(int id) {
    Registro7005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
