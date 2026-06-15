// fichero 27245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27245;

Registro27245 crear_registro27245(int id) {
    Registro27245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
