// fichero 16405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16405;

Registro16405 crear_registro16405(int id) {
    Registro16405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
