// fichero 2493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2493;

Registro2493 crear_registro2493(int id) {
    Registro2493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
