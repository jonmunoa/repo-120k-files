// fichero 3449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3449;

Registro3449 crear_registro3449(int id) {
    Registro3449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
