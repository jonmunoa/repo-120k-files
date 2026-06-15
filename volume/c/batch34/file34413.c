// fichero 34413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34413;

Registro34413 crear_registro34413(int id) {
    Registro34413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
