// fichero 27449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27449;

Registro27449 crear_registro27449(int id) {
    Registro27449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
