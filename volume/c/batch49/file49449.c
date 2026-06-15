// fichero 49449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49449;

Registro49449 crear_registro49449(int id) {
    Registro49449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
