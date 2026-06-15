// fichero 16161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16161;

Registro16161 crear_registro16161(int id) {
    Registro16161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
