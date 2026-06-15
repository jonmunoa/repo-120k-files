// fichero 29465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29465;

Registro29465 crear_registro29465(int id) {
    Registro29465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
