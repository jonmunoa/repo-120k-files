// fichero 6493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6493;

Registro6493 crear_registro6493(int id) {
    Registro6493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
