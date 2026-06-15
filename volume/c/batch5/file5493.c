// fichero 5493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5493;

Registro5493 crear_registro5493(int id) {
    Registro5493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
