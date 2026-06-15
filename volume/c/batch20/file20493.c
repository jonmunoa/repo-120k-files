// fichero 20493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20493;

Registro20493 crear_registro20493(int id) {
    Registro20493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
