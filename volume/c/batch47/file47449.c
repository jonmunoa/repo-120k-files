// fichero 47449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47449;

Registro47449 crear_registro47449(int id) {
    Registro47449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
