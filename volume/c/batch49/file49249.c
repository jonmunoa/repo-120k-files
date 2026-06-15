// fichero 49249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49249;

Registro49249 crear_registro49249(int id) {
    Registro49249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
