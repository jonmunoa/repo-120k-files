// fichero 493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro493;

Registro493 crear_registro493(int id) {
    Registro493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
