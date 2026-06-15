// fichero 34437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34437;

Registro34437 crear_registro34437(int id) {
    Registro34437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
