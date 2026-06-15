// fichero 20161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20161;

Registro20161 crear_registro20161(int id) {
    Registro20161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
