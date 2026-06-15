// fichero 20449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20449;

Registro20449 crear_registro20449(int id) {
    Registro20449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
