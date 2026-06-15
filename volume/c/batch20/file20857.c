// fichero 20857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20857;

Registro20857 crear_registro20857(int id) {
    Registro20857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
