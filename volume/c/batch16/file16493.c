// fichero 16493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16493;

Registro16493 crear_registro16493(int id) {
    Registro16493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
