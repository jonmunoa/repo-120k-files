// fichero 43161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43161;

Registro43161 crear_registro43161(int id) {
    Registro43161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
