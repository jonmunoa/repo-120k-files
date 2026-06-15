// fichero 11497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11497;

Registro11497 crear_registro11497(int id) {
    Registro11497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
