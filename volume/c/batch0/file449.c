// fichero 449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro449;

Registro449 crear_registro449(int id) {
    Registro449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
