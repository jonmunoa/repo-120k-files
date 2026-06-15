// fichero 43961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43961;

Registro43961 crear_registro43961(int id) {
    Registro43961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
