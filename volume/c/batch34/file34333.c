// fichero 34333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34333;

Registro34333 crear_registro34333(int id) {
    Registro34333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
