// fichero 7369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7369;

Registro7369 crear_registro7369(int id) {
    Registro7369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
