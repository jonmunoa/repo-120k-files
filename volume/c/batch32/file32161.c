// fichero 32161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32161;

Registro32161 crear_registro32161(int id) {
    Registro32161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
