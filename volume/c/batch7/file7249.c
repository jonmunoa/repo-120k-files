// fichero 7249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7249;

Registro7249 crear_registro7249(int id) {
    Registro7249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
