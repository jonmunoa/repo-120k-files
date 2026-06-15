// fichero 34493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34493;

Registro34493 crear_registro34493(int id) {
    Registro34493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
